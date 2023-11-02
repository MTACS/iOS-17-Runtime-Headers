
@interface ACDPluginEntry : NSObject <ACDPluginEntryProtocol> {
    NSBundle * _bundle;
    struct { 
        unsigned int principalObject : 1; 
        unsigned int supportedAccountTypes : 1; 
        unsigned int supportedDataclasses : 1; 
        unsigned int identifier : 1; 
    }  _fetchedFlags;
    NSString * _identifier;
    id  _principalObject;
    NSSet * _supportedAccountTypes;
    NSSet * _supportedDataclasses;
}

@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) id principalObject;
@property (nonatomic, readonly) NSSet *supportedAccountTypes;
@property (nonatomic, readonly) NSSet *supportedDataclasses;

- (void).cxx_destruct;
- (id)bundle;
- (id)debugDescription;
- (id)description;
- (id)identifier;
- (id)init;
- (id)initWithBundle:(id)arg1;
- (id)principalObject;
- (bool)principalObjectRespondsToSelector:(SEL)arg1;
- (id)supportedAccountTypes;
- (id)supportedDataclasses;

@end
