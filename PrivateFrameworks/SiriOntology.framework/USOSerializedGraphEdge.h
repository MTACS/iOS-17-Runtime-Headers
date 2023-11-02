
@interface USOSerializedGraphEdge : NSObject <NSSecureCoding> {
    NSString * _edgeLabel;
    unsigned int  _enumeration;
    unsigned long long  _fromVertex;
    unsigned long long  _toVertex;
    int  _usoElementId;
}

@property (nonatomic, retain) NSString *edgeLabel;
@property unsigned int enumeration;
@property unsigned long long fromVertex;
@property unsigned long long toVertex;
@property int usoElementId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)edgeLabel;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)enumeration;
- (unsigned long long)fromVertex;
- (id)initWithCoder:(id)arg1;
- (id)initWithUsoElementId:(int)arg1 fromVertex:(unsigned long long)arg2 toVertex:(unsigned long long)arg3 enumeration:(unsigned int)arg4;
- (void)setEdgeLabel:(id)arg1;
- (void)setEnumeration:(unsigned int)arg1;
- (void)setFromVertex:(unsigned long long)arg1;
- (void)setToVertex:(unsigned long long)arg1;
- (void)setUsoElementId:(int)arg1;
- (unsigned long long)toVertex;
- (int)usoElementId;

@end
