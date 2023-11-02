
@interface EDAMPreferences : FATObject {
    NSDictionary * _preferences;
    NSNumber * _updateSequenceNum;
}

@property (nonatomic, retain) NSDictionary *preferences;
@property (nonatomic, retain) NSNumber *updateSequenceNum;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)preferences;
- (void)setPreferences:(id)arg1;
- (void)setUpdateSequenceNum:(id)arg1;
- (id)updateSequenceNum;

@end
