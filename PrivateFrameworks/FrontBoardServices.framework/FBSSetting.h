
@interface FBSSetting : NSObject <FBSSetting> {
    Class  _expectedClass;
    Class  _extension;
    NSString * _extensionID;
    bool  _isBSSettings;
    bool  _local;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
    unsigned long long  _setting;
    long long  _specialCollection;
    id  _undefinedValue;
    long long  _volatile;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (bool)isEqual:(id)arg1;
- (bool)matchesProperty:(SEL)arg1;
- (bool)matchesPropertyName:(id)arg1;

@end
