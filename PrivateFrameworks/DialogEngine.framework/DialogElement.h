
@interface DialogElement : NSObject {
    NSString * _fullPrint;
    NSString * _fullSpeak;
    NSString * _id;
    bool  _printOnly;
    bool  _spokenOnly;
    NSString * _supportingPrint;
    NSString * _supportingSpeak;
}

@property (nonatomic, retain) NSString *fullPrint;
@property (nonatomic, retain) NSString *fullSpeak;
@property (nonatomic, retain) NSString *id;
@property (nonatomic) bool printOnly;
@property (nonatomic) bool spokenOnly;
@property (nonatomic, retain) NSString *supportingPrint;
@property (nonatomic, retain) NSString *supportingSpeak;

- (void).cxx_destruct;
- (id)fullPrint;
- (id)fullSpeak;
- (id)id;
- (bool)printOnly;
- (void)setFullPrint:(id)arg1;
- (void)setFullSpeak:(id)arg1;
- (void)setId:(id)arg1;
- (void)setPrintOnly:(bool)arg1;
- (void)setSpokenOnly:(bool)arg1;
- (void)setSupportingPrint:(id)arg1;
- (void)setSupportingSpeak:(id)arg1;
- (bool)spokenOnly;
- (id)supportingPrint;
- (id)supportingSpeak;

@end
