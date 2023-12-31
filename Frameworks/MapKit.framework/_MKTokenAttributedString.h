
@interface _MKTokenAttributedString : NSObject {
    NSAttributedString * _attributedString;
    NSString * _string;
}

@property (nonatomic, copy) NSAttributedString *attributedString;
@property (nonatomic, copy) NSString *string;

- (void).cxx_destruct;
- (id)attributedString;
- (id)description;
- (bool)isEmpty;
- (void)setAttributedString:(id)arg1;
- (void)setString:(id)arg1;
- (id)string;

@end
