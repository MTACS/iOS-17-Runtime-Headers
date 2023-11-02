
@interface CKBalloonSelectionState : NSObject {
    long long  _style;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _textSelectionRange;
}

@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } textSelectionRange;

+ (id)balloonSelectionState:(long long)arg1;
+ (id)balloonSelectionState:(long long)arg1 textSelectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

- (id)description;
- (id)initWithStyle:(long long)arg1 textSelectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (long long)style;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textSelectionRange;

@end
