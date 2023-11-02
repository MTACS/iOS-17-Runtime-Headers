
@interface SGTaggedCharacterRange : NSObject <NSSecureCoding> {
    unsigned long long  _annotationType;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSArray * _tags;
    NSString * _text;
}

@property (nonatomic, readonly) unsigned long long annotationType;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, readonly) NSArray *tags;
@property (nonatomic, readonly) NSString *text;

+ (unsigned long long)annotationTypeFromString:(id)arg1;
+ (id)annotationTypeUniqueIdentifier:(unsigned long long)arg1;
+ (id)biosBasedAnnotation:(id)arg1 usingTags:(id)arg2 forSection:(id)arg3;
+ (id)describeAnnotationType:(unsigned long long)arg1;
+ (id)enrichAndFilterTaggedCharacterRanges:(id)arg1 usingMapping:(id)arg2 withAnnotationType:(unsigned long long)arg3;
+ (id)flattenTaggedCharacterRanges:(id)arg1 usingWhitelist:(id)arg2 replaceOOVWithToken:(id)arg3;
+ (id)mergeTaggedCharacterRanges:(id)arg1 usingBaseTaggedCharacterRanges:(id)arg2 extraTags:(id)arg3 tagOverrides:(id)arg4 alignWithGroundTruth:(id)arg5;
+ (id)mergeTagsFromTaggedCharacterRanges:(id)arg1 withTaggedCharacterRanges:(id)arg2;
+ (id)state:(id)arg1 index:(int)arg2 section:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)annotationType;
- (id)annotationTypeUniqueIdentifier;
- (id)description;
- (id)dictRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAnnotationType:(unsigned long long)arg1 tags:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 text:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithDict:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTaggedCharacterRange:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)tags;
- (id)text;

@end
