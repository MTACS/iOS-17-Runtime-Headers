
@interface _UIPopoverViewBackgroundComponentView : UIView {
    NSString * _directionSelector;
    NSMutableArray * _replicants;
}

@property (nonatomic, copy) NSString *directionSelector;

- (void).cxx_destruct;
- (id)_newReplicant;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)directionSelector;
- (id)replicate;
- (void)setDirectionSelector:(id)arg1;
- (void)updateReplicants;

@end
