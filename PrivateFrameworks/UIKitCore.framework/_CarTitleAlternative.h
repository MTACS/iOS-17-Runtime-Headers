
@interface _CarTitleAlternative : NSObject {
    NSString * _title;
    double  _width;
}

@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) double width;

+ (id)alternativeWithTitle:(id)arg1 label:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)title;
- (void)updateWithLabel:(id)arg1;
- (double)width;

@end
