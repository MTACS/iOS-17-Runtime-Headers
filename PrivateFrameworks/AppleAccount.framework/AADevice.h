
@interface AADevice : NSObject {
    NSString * _model;
    NSString * _modelDisplayName;
    NSString * _modelLargePhotoURL1x;
    NSString * _modelLargePhotoURL2x;
    NSString * _modelLargePhotoURL3x;
    NSString * _modelSmallPhotoURL1x;
    NSString * _modelSmallPhotoURL2x;
    NSString * _modelSmallPhotoURL3x;
    NSString * _name;
    NSString * _osVersion;
    NSString * _swVersion;
}

@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *modelDisplayName;
@property (nonatomic, readonly) NSString *modelLargePhotoURL1x;
@property (nonatomic, readonly) NSString *modelLargePhotoURL2x;
@property (nonatomic, readonly) NSString *modelLargePhotoURL3x;
@property (nonatomic, readonly) NSString *modelSmallPhotoURL1x;
@property (nonatomic, readonly) NSString *modelSmallPhotoURL2x;
@property (nonatomic, readonly) NSString *modelSmallPhotoURL3x;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *osVersion;
@property (nonatomic, readonly) NSString *swVersion;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)model;
- (id)modelDisplayName;
- (id)modelLargePhotoURL1x;
- (id)modelLargePhotoURL2x;
- (id)modelLargePhotoURL3x;
- (id)modelSmallPhotoURL1x;
- (id)modelSmallPhotoURL2x;
- (id)modelSmallPhotoURL3x;
- (id)name;
- (id)osVersion;
- (id)swVersion;

@end
