
@interface ATXNotificationEntityFeatures : NSObject <ATXJSONSerializableProtocol> {
    NSMutableArray * _secondsToEngagement;
}

@property (nonatomic, retain) NSMutableArray *secondsToEngagement;

- (void).cxx_destruct;
- (id)init;
- (id)initFromJSON:(id)arg1;
- (id)jsonRepresentation;
- (id)secondsToEngagement;
- (void)setSecondsToEngagement:(id)arg1;

@end
