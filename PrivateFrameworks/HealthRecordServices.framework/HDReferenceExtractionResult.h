
@interface HDReferenceExtractionResult : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _completeResources;
    NSArray * _incompleteResources;
    NSURL * _nextSearchResultURL;
    NSArray * _unresolvableReferences;
}

@property (nonatomic, readonly, copy) NSArray *completeResources;
@property (nonatomic, readonly, copy) NSArray *incompleteResources;
@property (nonatomic, readonly, copy) NSURL *nextSearchResultURL;
@property (nonatomic, readonly, copy) NSArray *unresolvableReferences;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)completeResources;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)incompleteResources;
- (id)initWithCoder:(id)arg1;
- (id)initWithCompleteResources:(id)arg1 incompleteResources:(id)arg2 unresolvableReferences:(id)arg3 nextSearchResultURL:(id)arg4;
- (id)nextSearchResultURL;
- (id)unresolvableReferences;

@end
