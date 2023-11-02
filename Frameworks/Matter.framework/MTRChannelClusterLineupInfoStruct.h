
@interface MTRChannelClusterLineupInfoStruct : NSObject <NSCopying> {
    NSNumber * _lineupInfoType;
    NSString * _lineupName;
    NSString * _operatorName;
    NSString * _postalCode;
}

@property (nonatomic, copy) NSNumber *lineupInfoType;
@property (nonatomic, copy) NSString *lineupName;
@property (nonatomic, copy) NSString *operatorName;
@property (nonatomic, copy) NSString *postalCode;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)lineupInfoType;
- (id)lineupName;
- (id)operatorName;
- (id)postalCode;
- (void)setLineupInfoType:(id)arg1;
- (void)setLineupName:(id)arg1;
- (void)setOperatorName:(id)arg1;
- (void)setPostalCode:(id)arg1;

@end
