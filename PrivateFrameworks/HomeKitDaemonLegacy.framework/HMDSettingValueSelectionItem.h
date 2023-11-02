
@interface HMDSettingValueSelectionItem : NSObject {
    NSUUID * _identifier;
    NSString * _selection;
}

@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSString *selection;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 selection:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)selection;

@end
