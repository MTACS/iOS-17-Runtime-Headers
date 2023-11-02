
@interface AskTo.ATAnswerChoice : NSObject {
    void id;
    void kind;
    void title;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *id;
@property (nonatomic) short kind;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)description;
- (long long)hash;
- (id)id;
- (id)init;
- (id)initWithId:(id)arg1 title:(id)arg2;
- (bool)isEqual:(id)arg1;
- (short)kind;
- (void)setKind:(short)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
