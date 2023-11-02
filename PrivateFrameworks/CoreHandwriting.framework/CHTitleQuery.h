
@interface CHTitleQuery : CHQuery {
    NSSet * _titleStrokeIdentifiers;
    NSString * _transcribedTitle;
}

@property (nonatomic, readonly, copy) NSSet *titleStrokeIdentifiers;
@property (nonatomic, readonly, copy) NSString *transcribedTitle;

- (void).cxx_destruct;
- (id)debugName;
- (id)initWithRecognitionSession:(id)arg1;
- (void)q_updateQueryResult;
- (id)titleStrokeIdentifiers;
- (id)transcribedTitle;

@end
