
@interface MTRBooleanStateClusterStateChangeEvent : NSObject <NSCopying> {
    NSNumber * _stateValue;
}

@property (nonatomic, copy) NSNumber *stateValue;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (void)setStateValue:(id)arg1;
- (id)stateValue;

@end
