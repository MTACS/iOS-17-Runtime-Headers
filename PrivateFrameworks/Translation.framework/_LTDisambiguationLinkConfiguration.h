
@interface _LTDisambiguationLinkConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _adjacencyList;
    NSNumber * _defaultGender;
    NSNumber * _gender;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _sourceRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _targetRange;
    NSArray * _unvalidatedAdjacencyList;
}

@property (nonatomic, readonly) NSArray *adjacencyList;
@property (nonatomic, readonly) NSNumber *defaultGender;
@property (nonatomic, readonly) NSSet *edgeTypes;
@property (nonatomic, readonly) NSNumber *gender;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } sourceRange;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } targetRange;
@property (nonatomic, readonly) NSArray *unvalidatedAdjacencyList;

// Image: /System/Library/PrivateFrameworks/Translation.framework/Translation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_finishValidating;
- (void)_insertPrefix:(id)arg1;
- (id)_unvalidatedEdgeFromAdjacencyListMatchingTargetNodeIndex:(unsigned long long)arg1;
- (void)_validateWithAdjacencyList:(id)arg1 gender:(id)arg2 defaultGender:(id)arg3;
- (id)adjacencyList;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultGender;
- (id)edgeTypes;
- (void)encodeWithCoder:(id)arg1;
- (id)gender;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 targetRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 adjacencyList:(id)arg3 gender:(id)arg4 defaultGender:(id)arg5;
- (id)initWithSourceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 targetRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 unvalidatedAdjacencyList:(id)arg3;
- (id)initWithSourceText:(id)arg1 sourceSnippet:(id)arg2 targetText:(id)arg3 targetSnippet:(id)arg4 adjacencyList:(id)arg5 gender:(id)arg6 defaultGender:(id)arg7;
- (id)initWithSourceText:(id)arg1 sourceSnippet:(id)arg2 targetText:(id)arg3 targetSnippet:(id)arg4 unvalidatedAdjacencyList:(id)arg5;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })sourceRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })targetRange;
- (id)unvalidatedAdjacencyList;

// Image: /System/Library/PrivateFrameworks/TranslationDaemon.framework/TranslationDaemon

+ (id)_linkConfigurationWithSourceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 targetRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 unvalidatedAdjacencyList:(id)arg3 expectedNumberOfEdges:(unsigned long long)arg4;
+ (id)linkConfigurationWithEMTSelectionSpan:(id)arg1 sourceText:(id)arg2 targetText:(id)arg3;
+ (id)linkConfigurationWithFTSelectionSpan:(id)arg1 descriptions:(id)arg2 sourceText:(id)arg3 targetText:(id)arg4;

@end
