
@interface NewsUI2.UserNotification : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  deliveryStatus;
    void identifier;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  kind;
    void message;
    void payload;
    void subtitle;
    void threadIdentifier;
    void title;
}

- (void).cxx_destruct;
- (id)init;

@end
