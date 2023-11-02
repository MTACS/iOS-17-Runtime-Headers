
@interface LCFModelMetadata : NSObject {
    NSDictionary * _custom;
    NSDate * _dateCreated;
    NSDate * _dateTrained;
    bool  _isAvailable;
    bool  _isImported;
    bool  _isLocal;
    bool  _isOriginalEmptyModel;
    NSString * _sha256;
}

@property (nonatomic, copy) NSDictionary *custom;
@property (nonatomic, copy) NSDate *dateCreated;
@property (nonatomic, copy) NSDate *dateTrained;
@property (nonatomic) bool isAvailable;
@property (nonatomic) bool isImported;
@property (nonatomic) bool isLocal;
@property (nonatomic) bool isOriginalEmptyModel;
@property (nonatomic, copy) NSString *sha256;

- (void).cxx_destruct;
- (id)custom;
- (id)dateCreated;
- (id)dateTrained;
- (id)init:(id)arg1;
- (bool)isAvailable;
- (bool)isImported;
- (bool)isLocal;
- (bool)isOriginalEmptyModel;
- (void)setCustom:(id)arg1;
- (void)setDateCreated:(id)arg1;
- (void)setDateTrained:(id)arg1;
- (void)setIsAvailable:(bool)arg1;
- (void)setIsImported:(bool)arg1;
- (void)setIsLocal:(bool)arg1;
- (void)setIsOriginalEmptyModel:(bool)arg1;
- (void)setSha256:(id)arg1;
- (id)sha256;
- (id)toDictionary;

@end
