
@interface BMStreamVirtualTable : NSObject {
    bool  _acceptPublisherOptions;
    id /* block */  _publisherBlock;
    BMSQLSchema * _schema;
}

@property (nonatomic, readonly) bool acceptPublisherOptions;
@property (nonatomic, readonly, copy) id /* block */ publisherBlock;
@property (nonatomic, readonly) BMSQLSchema *schema;

+ (id)new;

- (void).cxx_destruct;
- (bool)acceptPublisherOptions;
- (id)description;
- (id)init;
- (id)initWithSchema:(id)arg1 publisherBlock:(id /* block */)arg2;
- (id)initWithSchema:(id)arg1 publisherBlockWithOptions:(id /* block */)arg2 acceptPublisherOptions:(bool)arg3;
- (id)initWithStream:(id)arg1;
- (id)initWithStream:(id)arg1 useCase:(id)arg2;
- (id /* block */)publisherBlock;
- (id)schema;

@end
