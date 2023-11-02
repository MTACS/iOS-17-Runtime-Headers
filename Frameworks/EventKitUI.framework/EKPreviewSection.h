
@interface EKPreviewSection : NSObject {
    NSDate * _date;
    NSArray * _events;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic, readonly) NSArray *events;

+ (id)sectionWithDate:(id)arg1;

- (void).cxx_destruct;
- (void)addEvent:(id)arg1;
- (id)date;
- (id)events;
- (id)initWithDate:(id)arg1;
- (void)setDate:(id)arg1;

@end
