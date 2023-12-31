
@interface TSWPChangeSession : TSPObject {
    TSKAnnotationAuthor * _author;
    NSDate * _date;
    unsigned int  _sessionUID;
}

@property (nonatomic, retain) TSKAnnotationAuthor *author;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic) unsigned int sessionUID;

- (id)author;
- (id)date;
- (void)dealloc;
- (bool)isEqualToSession:(id)arg1;
- (unsigned int)sessionUID;
- (void)setAuthor:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setSessionUID:(unsigned int)arg1;

@end
