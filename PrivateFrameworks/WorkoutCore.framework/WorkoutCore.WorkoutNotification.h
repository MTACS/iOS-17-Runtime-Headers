
@interface WorkoutCore.WorkoutNotification : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  createdAt;
    void displayDuration;
    void notificationType;
    void units;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
