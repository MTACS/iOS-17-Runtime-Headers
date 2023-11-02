
@interface CalConferenceDeserializationResult : NSObject {
    NSString * _blockTitle;
    CalVirtualConference * _conference;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

@property (nonatomic, readonly) NSString *blockTitle;
@property (nonatomic, readonly) CalVirtualConference *conference;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

- (void).cxx_destruct;
- (id)blockTitle;
- (id)conference;
- (id)description;
- (id)initWithConference:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 blockTitle:(id)arg3;
- (bool)isEqual:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;

@end
