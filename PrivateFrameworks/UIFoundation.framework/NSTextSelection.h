
@interface NSTextSelection : NSObject <NSSecureCoding> {
    long long  _affinity;
    double  _anchorPositionOffset;
    long long  _granularity;
    bool  _logical;
    <NSTextLocation> * _secondarySelectionLocation;
    <NSTextLocation> * _selectionAnchorLocation;
    NSArray * _textRanges;
    bool  _transient;
    NSDictionary * _typingAttributes;
}

@property (readonly) long long affinity;
@property double anchorPositionOffset;
@property (readonly) long long granularity;
@property (getter=isLogical) bool logical;
@property (retain) <NSTextLocation> *secondarySelectionLocation;
@property (retain) <NSTextLocation> *selectionAnchorLocation;
@property (readonly, copy) NSArray *textRanges;
@property (getter=isTransient) bool transient;
@property (copy) NSDictionary *typingAttributes;

+ (id)descriptionForAffinity:(long long)arg1;
+ (id)descriptionForGranularity:(long long)arg1;
+ (bool)supportsSecureCoding;

- (long long)affinity;
- (double)anchorPositionOffset;
- (bool)containsLocation:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)granularity;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1 affinity:(long long)arg2;
- (id)initWithRange:(id)arg1 affinity:(long long)arg2 granularity:(long long)arg3;
- (id)initWithRanges:(id)arg1 affinity:(long long)arg2 granularity:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTextSelection:(id)arg1;
- (bool)isLogical;
- (bool)isTransient;
- (id)secondarySelectionLocation;
- (id)selectionAnchorLocation;
- (void)setAnchorPositionOffset:(double)arg1;
- (void)setLogical:(bool)arg1;
- (void)setSecondarySelectionLocation:(id)arg1;
- (void)setSelectionAnchorLocation:(id)arg1;
- (void)setTransient:(bool)arg1;
- (void)setTypingAttributes:(id)arg1;
- (id)textRangeContainingLocation:(id)arg1;
- (id)textRanges;
- (id)textSelectionWithTextRanges:(id)arg1;
- (id)typingAttributes;

@end
