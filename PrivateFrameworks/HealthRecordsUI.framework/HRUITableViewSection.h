
@interface HRUITableViewSection : NSObject {
    void estimatedNumRows;
    void footerString;
    void headerString;
    void identifier;
    void rows;
}

@property (nonatomic, retain) NSNumber *estimatedNumRows;
@property (nonatomic, copy) NSString *footerString;
@property (nonatomic, copy) NSString *headerString;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSArray *rows;

- (void).cxx_destruct;
- (void)addRow:(id)arg1;
- (void)addRowForReuseIdentifier:(id)arg1;
- (id)estimatedNumRows;
- (id)footerString;
- (id)headerString;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)rows;
- (void)setEstimatedNumRows:(id)arg1;
- (void)setFooterString:(id)arg1;
- (void)setHeaderString:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRows:(id)arg1;

@end
