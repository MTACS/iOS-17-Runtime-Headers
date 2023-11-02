
@interface HFServiceNameComponents : NSObject {
    NSString * _rawRoomName;
    NSString * _rawServiceName;
    NSString * _roomName;
    bool  _roomNameAtEndSeparatedByWhitespace;
    NSString * _serviceName;
}

@property (nonatomic, readonly) NSString *composedString;
@property (nonatomic, retain) NSString *rawRoomName;
@property (nonatomic, retain) NSString *rawServiceName;
@property (nonatomic, retain) NSString *roomName;
@property (nonatomic) bool roomNameAtEndSeparatedByWhitespace;
@property (nonatomic, retain) NSString *serviceName;

- (void).cxx_destruct;
- (id)composedString;
- (unsigned long long)hash;
- (id)initWithRawServiceName:(id)arg1 rawRoomName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)rawRoomName;
- (id)rawServiceName;
- (id)roomName;
- (bool)roomNameAtEndSeparatedByWhitespace;
- (id)serviceName;
- (void)setRawRoomName:(id)arg1;
- (void)setRawServiceName:(id)arg1;
- (void)setRoomName:(id)arg1;
- (void)setRoomNameAtEndSeparatedByWhitespace:(bool)arg1;
- (void)setServiceName:(id)arg1;

@end
