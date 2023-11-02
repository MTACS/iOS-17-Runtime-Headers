
@interface CVAUserEvent : NSObject <NSSecureCoding> {
    NSData * _anchorData;
    unsigned long long  _eventType;
    NSNumber * _movLowestTimestamp;
    NSString * _peerDisplayName;
    NSNumber * _sessionID;
    double  _timestamp;
    NSArray * _transformCameraToAnchor;
    NSUUID * _uuid;
}

@property (nonatomic, retain) NSData *anchorData;
@property (nonatomic) unsigned long long eventType;
@property (nonatomic, retain) NSNumber *movLowestTimestamp;
@property (nonatomic, retain) NSString *peerDisplayName;
@property (nonatomic, retain) NSNumber *sessionID;
@property (nonatomic) double timestamp;
@property (nonatomic, retain) NSArray *transformCameraToAnchor;
@property (nonatomic, retain) NSUUID *uuid;

+ (id)classes;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anchorData;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)eventType;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventType:(unsigned long long)arg1 timestamp:(double)arg2;
- (id)movLowestTimestamp;
- (id)peerDisplayName;
- (id)sessionID;
- (void)setAnchorData:(id)arg1;
- (void)setEventType:(unsigned long long)arg1;
- (void)setMovLowestTimestamp:(id)arg1;
- (void)setPeerDisplayName:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTransformCameraToAnchor:(id)arg1;
- (void)setUuid:(id)arg1;
- (double)timestamp;
- (id)transformCameraToAnchor;
- (id)uuid;

@end
