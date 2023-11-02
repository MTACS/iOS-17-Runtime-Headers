
@interface NSTextList : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _listFlags;
    void * _listSecondary;
    NSString * _markerFormat;
    NSTextAttachment * _markerTextAttachment;
    long long  _startIndex;
}

@property (readonly) unsigned long long listOptions;
@property (readonly) NSString *markerFormat;
@property (retain) NSTextAttachment *markerTextAttachment;
@property (getter=isOrdered, readonly) bool ordered;
@property long long startingItemNumber;

+ (id)_standardMarkerAttributesForAttributes:(id)arg1;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (bool)_isOrdered;
- (id)_markerAtIndex:(unsigned long long)arg1 inText:(id)arg2;
- (id)_markerForMarkerFormat:(id)arg1 itemNumber:(long long)arg2 isNumbered:(bool*)arg3 substitutionStart:(unsigned long long*)arg4 end:(unsigned long long*)arg5 specifierStart:(unsigned long long*)arg6 end:(unsigned long long*)arg7;
- (id)_markerPrefix;
- (id)_markerSpecifier;
- (id)_markerSpecifierAsCSSValue;
- (id)_markerSuffix;
- (id)_markerTitle;
- (id)_unaffixedMarkerForItemNumber:(long long)arg1;
- (id)_unaffixedMarkerFormat;
- (id)_unaffixedMarkerTitle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMarkerFormat:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithMarkerFormat:(id)arg1 options:(unsigned long long)arg2 startingItemNumber:(long long)arg3;
- (bool)isOrdered;
- (unsigned long long)listOptions;
- (id)markerForItemNumber:(long long)arg1;
- (id)markerFormat;
- (id)markerTextAttachment;
- (unsigned long long)options;
- (void)setMarkerTextAttachment:(id)arg1;
- (void)setStartingItemNumber:(long long)arg1;
- (long long)startingItemNumber;

@end
