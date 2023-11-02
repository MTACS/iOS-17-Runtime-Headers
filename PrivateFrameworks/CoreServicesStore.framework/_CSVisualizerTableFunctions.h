
@interface _CSVisualizerTableFunctions : NSObject <NSCopying> {
    id /* block */  _getDescription;
    id /* block */  _getSummary;
}

@property (copy) id /* block */ getDescription;
@property (copy) id /* block */ getSummary;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)getDescription;
- (id /* block */)getSummary;
- (void)setGetDescription:(id /* block */)arg1;
- (void)setGetSummary:(id /* block */)arg1;

@end
