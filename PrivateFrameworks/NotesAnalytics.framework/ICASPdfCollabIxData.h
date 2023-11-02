
@interface ICASPdfCollabIxData : NSObject <AADataEventType> {
    NSNumber * _hasCollabEdit;
    NSNumber * _hasCollabView;
}

@property (nonatomic, readonly) NSNumber *hasCollabEdit;
@property (nonatomic, readonly) NSNumber *hasCollabView;

+ (id)dataName;

- (void).cxx_destruct;
- (id)hasCollabEdit;
- (id)hasCollabView;
- (id)initWithHasCollabView:(id)arg1 hasCollabEdit:(id)arg2;
- (id)toDict;

@end
