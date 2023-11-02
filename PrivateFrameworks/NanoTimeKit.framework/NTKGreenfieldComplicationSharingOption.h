
@interface NTKGreenfieldComplicationSharingOption : NSObject {
    NSString * _name;
    unsigned long long  _optionType;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long optionType;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;

+ (id)optionWithName:(id)arg1 uniqueIdentifier:(id)arg2 optionType:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)name;
- (unsigned long long)optionType;
- (id)uniqueIdentifier;

@end
