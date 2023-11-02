
@interface EMFAnchoredSearchAnchorCollection : NSObject {
    NSArray * _leftHandAnchors;
    NSString * _localeIdentifier;
    NSArray * _rightHandAnchors;
}

@property (nonatomic, copy) NSArray *leftHandAnchors;
@property (nonatomic, copy) NSString *localeIdentifier;
@property (nonatomic, copy) NSArray *rightHandAnchors;

- (void).cxx_destruct;
- (id)description;
- (id)initWithLocaleIdentifier:(id)arg1;
- (id)initWithLocaleIdentifier:(id)arg1 leftHandAnchors:(id)arg2 rightHandAnchors:(id)arg3;
- (id)leftHandAnchors;
- (id)localeIdentifier;
- (id)rightHandAnchors;
- (void)setLeftHandAnchors:(id)arg1;
- (void)setLocaleIdentifier:(id)arg1;
- (void)setRightHandAnchors:(id)arg1;

@end
