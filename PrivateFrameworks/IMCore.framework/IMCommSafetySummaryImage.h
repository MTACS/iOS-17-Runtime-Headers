
@interface IMCommSafetySummaryImage : NSObject {
    NSString * _identifier;
    NSData * _imageData;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) NSData *imageData;

- (void).cxx_destruct;
- (id)identifier;
- (id)imageData;
- (id)initWithIdentifier:(id)arg1 imageData:(id)arg2;

@end
