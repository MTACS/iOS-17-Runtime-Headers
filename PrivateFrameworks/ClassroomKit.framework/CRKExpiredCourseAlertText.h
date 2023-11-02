
@interface CRKExpiredCourseAlertText : NSObject {
    CRKCourse * _course;
}

@property (nonatomic, readonly) NSString *acknowledgeOptionTitle;
@property (nonatomic, readonly) CRKCourse *course;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) NSString *title;

+ (id)new;

- (void).cxx_destruct;
- (id)acknowledgeOptionTitle;
- (id)course;
- (id)init;
- (id)initWithCourse:(id)arg1;
- (id)message;
- (id)title;

@end
