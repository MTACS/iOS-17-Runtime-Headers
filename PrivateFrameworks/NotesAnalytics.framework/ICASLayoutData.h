
@interface ICASLayoutData : NSObject <AADataEventType> {
    NSNumber * _isTimelineView;
    ICASLayoutType * _layoutType;
}

@property (nonatomic, readonly) NSNumber *isTimelineView;
@property (nonatomic, readonly) ICASLayoutType *layoutType;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithLayoutType:(id)arg1 isTimelineView:(id)arg2;
- (id)isTimelineView;
- (id)layoutType;
- (id)toDict;

@end
