
@interface AXEventHandInfoRepresentation : NSObject <AXEventRepresentationDescription, NSCopying, NSSecureCoding> {
    unsigned int  _additionalHandEventFlagsForGeneratedEvents;
    unsigned short  _currentFingerCount;
    unsigned int  _eventType;
    unsigned int  _handEventMask;
    unsigned int  _handIdentity;
    unsigned int  _handIndex;
    struct CGPoint { 
        double x; 
        double y; 
    }  _handPosition;
    unsigned short  _initialFingerCount;
    unsigned long long  _length;
    unsigned short  _lifetimeFingerCount;
    NSArray * _paths;
    unsigned char  _swipe;
    unsigned char  _systemGesturePossible;
}

@property (nonatomic) unsigned int additionalHandEventFlagsForGeneratedEvents;
@property (nonatomic) unsigned short currentFingerCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int eventType;
@property (nonatomic) unsigned int handEventMask;
@property (nonatomic) unsigned int handIdentity;
@property (nonatomic) unsigned int handIndex;
@property (nonatomic) struct CGPoint { double x1; double x2; } handPosition;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned short initialFingerCount;
@property (nonatomic, readonly) bool isStylus;
@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic) unsigned short lifetimeFingerCount;
@property (nonatomic, retain) NSArray *paths;
@property (readonly) Class superclass;
@property (nonatomic) unsigned char swipe;
@property (nonatomic) unsigned char systemGesturePossible;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessibilityEventRepresentationTabularDescription;
- (unsigned int)additionalHandEventFlagsForGeneratedEvents;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned short)currentFingerCount;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)eventType;
- (unsigned int)handEventMask;
- (unsigned int)handIdentity;
- (unsigned int)handIndex;
- (struct CGPoint { double x1; double x2; })handPosition;
- (id)initWithCoder:(id)arg1;
- (unsigned short)initialFingerCount;
- (bool)isStylus;
- (unsigned long long)length;
- (unsigned short)lifetimeFingerCount;
- (id)paths;
- (void)setAdditionalHandEventFlagsForGeneratedEvents:(unsigned int)arg1;
- (void)setCurrentFingerCount:(unsigned short)arg1;
- (void)setEventType:(unsigned int)arg1;
- (void)setHandEventMask:(unsigned int)arg1;
- (void)setHandIdentity:(unsigned int)arg1;
- (void)setHandIndex:(unsigned int)arg1;
- (void)setHandPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInitialFingerCount:(unsigned short)arg1;
- (void)setLifetimeFingerCount:(unsigned short)arg1;
- (void)setPaths:(id)arg1;
- (void)setSwipe:(unsigned char)arg1;
- (void)setSystemGesturePossible:(unsigned char)arg1;
- (unsigned char)swipe;
- (unsigned char)systemGesturePossible;

@end
