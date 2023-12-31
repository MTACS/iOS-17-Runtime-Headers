
@interface QLStringWrapper : NSObject {
    NSDictionary * _attributes;
    NSAttributedString * _string;
}

@property (retain) NSDictionary *attributes;
@property (retain) NSAttributedString *string;

- (void).cxx_destruct;
- (id)attributes;
- (void)setAttributes:(id)arg1;
- (void)setString:(id)arg1;
- (id)string;

@end
