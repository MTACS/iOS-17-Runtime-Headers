
@interface SXTextStyleAttributesMap : NSObject {
    NSMutableArray * _attributes;
    NSString * _string;
}

@property (nonatomic, readonly) NSMutableArray *attributes;
@property (nonatomic, readonly) NSString *string;

- (void).cxx_destruct;
- (void)addAttributes:(id)arg1;
- (id)attributedString;
- (id)attributes;
- (id)attributesMapWithAttributesForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)description;
- (id)initWithString:(id)arg1;
- (id)string;

@end
