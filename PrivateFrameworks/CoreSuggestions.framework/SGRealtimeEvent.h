
@interface SGRealtimeEvent : NSObject <NSCopying, NSSecureCoding, SGRealtimeSuggestion> {
    SGEvent * _event;
    NSString * _eventIdentifier;
    bool  _isHarvested;
    NSString * _sourceMessageId;
    int  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SGEvent *event;
@property (nonatomic, readonly) NSString *eventIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isHarvested;
@property (nonatomic, readonly) NSString *sourceMessageId;
@property (nonatomic, readonly) int state;
@property (readonly) Class superclass;

+ (id)realtimeEventForCanceledEvent:(id)arg1 eventIdentifier:(id)arg2;
+ (id)realtimeEventForCanceledEvent:(id)arg1 eventIdentifier:(id)arg2 harvested:(bool)arg3;
+ (id)realtimeEventForDuplicateEvent:(id)arg1 eventIdentifier:(id)arg2;
+ (id)realtimeEventForDuplicateEvent:(id)arg1 eventIdentifier:(id)arg2 harvested:(bool)arg3;
+ (id)realtimeEventForExtractionExceptionWithSourceMessageId:(id)arg1;
+ (id)realtimeEventForNearDuplicateEvent:(id)arg1;
+ (id)realtimeEventForNearDuplicateEvent:(id)arg1 harvested:(bool)arg2;
+ (id)realtimeEventForNewEvent:(id)arg1;
+ (id)realtimeEventForNewEvent:(id)arg1 harvested:(bool)arg2;
+ (id)realtimeEventUpdateToEvent:(id)arg1 withNewValues:(id)arg2;
+ (id)realtimeEventUpdateToEvent:(id)arg1 withNewValues:(id)arg2 harvested:(bool)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)event;
- (id)eventIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(int)arg1 event:(id)arg2 eventIdentifier:(id)arg3 harvested:(bool)arg4;
- (id)initWithState:(int)arg1 event:(id)arg2 eventIdentifier:(id)arg3 harvested:(bool)arg4 sourceMessageId:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRealtimeEvent:(id)arg1;
- (bool)isHarvested;
- (id)sourceMessageId;
- (int)state;

@end
