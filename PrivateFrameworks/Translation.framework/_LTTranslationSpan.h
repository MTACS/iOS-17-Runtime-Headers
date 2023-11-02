
@interface _LTTranslationSpan : NSObject <NSSecureCoding> {
    NSString * _identifier;
    NSData * _metaInfoData;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    bool  _shouldTranslate;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, copy) NSData *metaInfoData;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic) bool shouldTranslate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithIdentifier:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 shouldTranslate:(bool)arg3 metaInfoData:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)metaInfoData;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setMetaInfoData:(id)arg1;
- (void)setShouldTranslate:(bool)arg1;
- (bool)shouldTranslate;

@end
