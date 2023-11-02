
@interface CADNotification : NSObject {
    double  _expirationDate;
    NSMutableArray * _mutableExpandedNotifications;
    CADObjectID * _objectID;
    double  _occurrenceDate;
    int  _type;
}

@property (nonatomic, readonly) bool expanded;
@property (nonatomic, readonly) NSArray *expandedNotifications;
@property (nonatomic, readonly) double expirationDate;
@property (nonatomic, retain) NSMutableArray *mutableExpandedNotifications;
@property (nonatomic, readonly) CADObjectID *objectID;
@property (nonatomic, readonly) double occurrenceDate;
@property (nonatomic, readonly) int type;

- (void).cxx_destruct;
- (void)addExpandedNotification:(id)arg1;
- (bool)expanded;
- (id)expandedNotifications;
- (double)expirationDate;
- (id)initWithType:(int)arg1 objectID:(id)arg2 occurrenceDate:(double)arg3 expirationDate:(double)arg4;
- (id)mutableExpandedNotifications;
- (id)objectID;
- (double)occurrenceDate;
- (void)setMutableExpandedNotifications:(id)arg1;
- (int)type;

@end
