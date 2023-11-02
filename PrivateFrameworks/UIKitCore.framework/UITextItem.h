
@interface UITextItem : NSObject {
    long long  _contentType;
    NSURL * _link;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSString * _tagIdentifier;
    NSTextAttachment * _textAttachment;
}

@property (nonatomic, readonly) long long contentType;
@property (nonatomic, readonly) NSURL *link;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, readonly) NSString *tagIdentifier;
@property (nonatomic, readonly) NSTextAttachment *textAttachment;

+ (id)_itemWithLink:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)_itemWithTag:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)_itemWithTextAttachment:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

- (void).cxx_destruct;
- (id)_customIdentifier;
- (id)_initWithType:(long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (long long)_itemType;
- (id)_link;
- (id)_textAttachment;
- (long long)contentType;
- (id)link;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)tagIdentifier;
- (id)textAttachment;

@end
