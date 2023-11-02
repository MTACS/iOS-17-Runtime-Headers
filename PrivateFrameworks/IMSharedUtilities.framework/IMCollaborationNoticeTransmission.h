
@interface IMCollaborationNoticeTransmission : NSObject <NSSecureCoding> {
    NSDate * _date;
    NSData * _eventData;
    long long  _eventType;
    NSString * _guidString;
}

@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly) NSData *eventData;
@property (nonatomic, readonly) long long eventType;
@property (nonatomic, readonly) NSString *guidString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)eventData;
- (long long)eventType;
- (id)guidString;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventData:(id)arg1 eventType:(long long)arg2 guidString:(id)arg3 date:(id)arg4;

@end
