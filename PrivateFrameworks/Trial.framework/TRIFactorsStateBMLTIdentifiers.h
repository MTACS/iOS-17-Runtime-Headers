
@interface TRIFactorsStateBMLTIdentifiers : NSObject <NSCopying> {
    NSString * _bmltId;
    int  _deploymentId;
}

@property (nonatomic, readonly) NSString *bmltId;
@property (nonatomic, readonly) int deploymentId;

- (void).cxx_destruct;
- (id)bmltId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)deploymentId;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBMLTId:(id)arg1 deploymentId:(int)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToIdentifiers:(id)arg1;

@end
