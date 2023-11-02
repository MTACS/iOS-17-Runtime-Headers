
@interface CoreOC.ObjectCaptureFrameEvent : NSObject <NSCoding, NSSecureCoding> {
    void boxTransform;
    void gesture;
    void position;
    void scanStatus;
    void timestamp;
}

@property (nonatomic, readonly) NSString *description;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
