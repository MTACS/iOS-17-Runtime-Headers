
@interface CUIKORContentPayload : NSObject {
    UIImage * _backgroundImage;
    long long  _requestId;
    unsigned long long  _requestOptions;
    CUIKORTextDrawInfo * _textDrawInfo;
    UIImage * _textImage;
    UIImage * _travelTimeImage;
    NSAttributedString * _travelTimeString;
}

@property (nonatomic, readonly) UIImage *backgroundImage;
@property (nonatomic, readonly) long long requestId;
@property (nonatomic, readonly) unsigned long long requestOptions;
@property (nonatomic, readonly) CUIKORTextDrawInfo *textDrawInfo;
@property (nonatomic, readonly) UIImage *textImage;
@property (nonatomic, readonly) UIImage *travelTimeImage;
@property (nonatomic, readonly) NSAttributedString *travelTimeString;

- (void).cxx_destruct;
- (id)backgroundImage;
- (id)initWithRequestId:(long long)arg1 requestOptions:(unsigned long long)arg2 backgroundImage:(id)arg3 textImage:(id)arg4 textDrawInfo:(id)arg5 travelTimeImage:(id)arg6 travelTimeString:(id)arg7;
- (long long)requestId;
- (unsigned long long)requestOptions;
- (id)textDrawInfo;
- (id)textImage;
- (id)travelTimeImage;
- (id)travelTimeString;

@end
