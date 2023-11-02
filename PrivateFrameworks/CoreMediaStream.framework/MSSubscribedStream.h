
@interface MSSubscribedStream : NSObject <NSSecureCoding> {
    NSString * _ctag;
    NSString * _streamID;
}

@property (nonatomic, retain) NSString *ctag;
@property (nonatomic, retain) NSString *streamID;

+ (id)subscribedStreamWithStreamID:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ctag;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStreamID:(id)arg1;
- (void)setCtag:(id)arg1;
- (void)setStreamID:(id)arg1;
- (id)streamID;

@end