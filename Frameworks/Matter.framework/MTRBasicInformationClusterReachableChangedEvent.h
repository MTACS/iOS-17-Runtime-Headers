
@interface MTRBasicInformationClusterReachableChangedEvent : NSObject <NSCopying> {
    NSNumber * _reachableNewValue;
}

@property (nonatomic, copy) NSNumber *reachableNewValue;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)reachableNewValue;
- (void)setReachableNewValue:(id)arg1;

@end
