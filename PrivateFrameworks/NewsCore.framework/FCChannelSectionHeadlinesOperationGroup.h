
@interface FCChannelSectionHeadlinesOperationGroup : NSObject {
    NSArray * _headlines;
    <FCSectionProviding> * _section;
}

@property (nonatomic, retain) NSArray *headlines;
@property (nonatomic, retain) <FCSectionProviding> *section;

- (void).cxx_destruct;
- (id)description;
- (id)headlines;
- (id)init;
- (id)initWithSection:(id)arg1 headlines:(id)arg2;
- (id)section;
- (void)setHeadlines:(id)arg1;
- (void)setSection:(id)arg1;

@end
