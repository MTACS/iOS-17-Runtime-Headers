
@interface MTRModeSelectClusterSemanticTagStruct : NSObject <NSCopying> {
    NSNumber * _mfgCode;
    NSNumber * _value;
}

@property (nonatomic, copy) NSNumber *mfgCode;
@property (nonatomic, copy) NSNumber *value;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)mfgCode;
- (void)setMfgCode:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
