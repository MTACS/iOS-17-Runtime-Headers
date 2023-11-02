
@interface MKButtonWithTargetArgument : UIButton {
    id  _targetArgument;
}

@property (nonatomic, retain) id targetArgument;

+ (id)button;

- (void).cxx_destruct;
- (void)setTargetArgument:(id)arg1;
- (id)targetArgument;

@end
