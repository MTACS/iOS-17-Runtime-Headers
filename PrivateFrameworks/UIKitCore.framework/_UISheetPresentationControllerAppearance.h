
@interface _UISheetPresentationControllerAppearance : NSObject <BSXPCSecureCoding, NSSecureCoding> {
    NSString * __largestUndimmedDetentIdentifier;
    bool  __prefersDimmingVisible;
    NSString * __smallestDimmedDetentIdentifier;
}

@property (getter=_isDimmingAlwaysVisible, nonatomic, readonly) bool _dimmingAlwaysVisible;
@property (nonatomic, readonly) NSString *_largestUndimmedDetentIdentifier;
@property (nonatomic, readonly) bool _prefersDimmingVisible;
@property (nonatomic, readonly) NSString *_smallestDimmedDetentIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)appearancePreferringDimmingVisible:(bool)arg1;
+ (id)appearanceWithLargestUndimmedDetentIdentifier:(id)arg1;
+ (id)appearanceWithSmallestDimmedDetentIdentifier:(id)arg1;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isDimmingAlwaysVisible;
- (id)_largestUndimmedDetentIdentifier;
- (bool)_prefersDimmingVisible;
- (id)_smallestDimmedDetentIdentifier;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
