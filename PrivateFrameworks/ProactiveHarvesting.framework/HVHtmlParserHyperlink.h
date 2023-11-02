
@interface HVHtmlParserHyperlink : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSURL * _url;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithURL:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToHtmlParserHyperlink:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)url;

@end
