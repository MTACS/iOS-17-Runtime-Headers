
@interface _UITextItemInteractionRequest : NSObject {
    _UITextItem * __item;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  __range;
}

@property (nonatomic, retain) _UITextItem *_item;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } _range;

+ (id)_requestWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 item:(id)arg2;

- (void).cxx_destruct;
- (id)_item;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_range;
- (void)set_item:(id)arg1;
- (void)set_range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
