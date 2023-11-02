
@interface EKConferenceDeserializationResult : NSObject {
    EKVirtualConference * _conference;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

@property (nonatomic, readonly) EKVirtualConference *conference;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

- (void).cxx_destruct;
- (id)conference;
- (id)initWithConference:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;

@end
