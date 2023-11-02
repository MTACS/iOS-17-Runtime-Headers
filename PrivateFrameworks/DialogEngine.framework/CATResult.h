
@interface CATResult : NSObject {
    NSArray * _captionPrint;
    NSArray * _captionSpeak;
    NSString * _catId;
    NSArray * _dialogId;
    NSDictionary * _meta;
    NSArray * _print;
    NSArray * _printOnly;
    NSArray * _speak;
    NSArray * _spokenOnly;
    NSArray * _spokenOnlyDefined;
    NSString * _visualId;
    NSDictionary * _visualParameters;
    NSData * _visualResponse;
}

@property (nonatomic, retain) NSArray *captionPrint;
@property (nonatomic, retain) NSArray *captionSpeak;
@property (nonatomic, retain) NSString *catId;
@property (nonatomic, retain) NSArray *dialogId;
@property (nonatomic, retain) NSDictionary *meta;
@property (nonatomic, retain) NSArray *print;
@property (nonatomic, retain) NSArray *printOnly;
@property (nonatomic, retain) NSArray *speak;
@property (nonatomic, retain) NSArray *spokenOnly;
@property (nonatomic, retain) NSArray *spokenOnlyDefined;
@property (nonatomic, retain) NSString *visualId;
@property (nonatomic, retain) NSDictionary *visualParameters;
@property (nonatomic, retain) NSData *visualResponse;

- (void).cxx_destruct;
- (id)captionPrint;
- (id)captionSpeak;
- (id)catId;
- (id)dialogId;
- (id)meta;
- (id)print;
- (id)printOnly;
- (void)setCaptionPrint:(id)arg1;
- (void)setCaptionSpeak:(id)arg1;
- (void)setCatId:(id)arg1;
- (void)setDialogId:(id)arg1;
- (void)setMeta:(id)arg1;
- (void)setPrint:(id)arg1;
- (void)setPrintOnly:(id)arg1;
- (void)setSpeak:(id)arg1;
- (void)setSpokenOnly:(id)arg1;
- (void)setSpokenOnlyDefined:(id)arg1;
- (void)setVisualId:(id)arg1;
- (void)setVisualParameters:(id)arg1;
- (void)setVisualResponse:(id)arg1;
- (id)speak;
- (id)spokenOnly;
- (id)spokenOnlyDefined;
- (id)visualId;
- (id)visualParameters;
- (id)visualResponse;

@end
