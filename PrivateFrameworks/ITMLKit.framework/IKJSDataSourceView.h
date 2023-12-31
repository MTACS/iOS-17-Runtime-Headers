
@interface IKJSDataSourceView : NSObject {
    IKJSDataSource * _dataSource;
    <IKJSDataSourceViewDelegate> * _delegate;
    struct { 
        bool hasDidReset; 
    }  _delegateFlags;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _usedIndexRange;
}

@property (nonatomic, readonly) IKJSDataSource *dataSource;
@property (nonatomic) <IKJSDataSourceViewDelegate> *delegate;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } usedIndexRange;

- (void).cxx_destruct;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)initForDataSource:(id)arg1;
- (void)reset;
- (void)setDelegate:(id)arg1;
- (void)setUsedIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })usedIndexRange;

@end
