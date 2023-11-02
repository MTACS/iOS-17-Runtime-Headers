
@interface PBFApplicationStateContext : NSObject {
    NSString * _foregroundStateDescription;
    NSSet * _posterUUIDs;
}

@property (nonatomic, readonly, copy) NSString *foregroundStateDescription;
@property (nonatomic, readonly, copy) NSSet *posterUUIDs;

+ (id)contextWithForegroundStateDescription:(id)arg1 posterUUIDs:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)foregroundStateDescription;
- (bool)isEqual:(id)arg1;
- (id)posterUUIDs;

@end
