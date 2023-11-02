
@interface CRTableStructureRecognizerResult : NSObject {
    struct vector<CRTableStructureColumn, std::allocator<CRTableStructureColumn>> { 
        struct CRTableStructureColumn {} *__begin_; 
        struct CRTableStructureColumn {} *__end_; 
        struct __compressed_pair<CRTableStructureColumn *, std::allocator<CRTableStructureColumn>> { 
            struct CRTableStructureColumn {} *__value_; 
        } __end_cap_; 
    }  _columns;
    struct vector<_NSRange, std::allocator<_NSRange>> { 
        struct _NSRange {} *__begin_; 
        struct _NSRange {} *__end_; 
        struct __compressed_pair<_NSRange *, std::allocator<_NSRange>> { 
            struct _NSRange {} *__value_; 
        } __end_cap_; 
    }  _columnsForCells;
    struct vector<CRTableStructureMerge, std::allocator<CRTableStructureMerge>> { 
        struct CRTableStructureMerge {} *__begin_; 
        struct CRTableStructureMerge {} *__end_; 
        struct __compressed_pair<CRTableStructureMerge *, std::allocator<CRTableStructureMerge>> { 
            struct CRTableStructureMerge {} *__value_; 
        } __end_cap_; 
    }  _merges;
    struct CRTableStructureRecognizerResultParsed { 
        unsigned long long numRows; 
        unsigned long long numColumns; 
        bool valid; 
        struct vector<double, std::allocator<double>> { 
            double *__begin_; 
            double *__end_; 
            struct __compressed_pair<double *, std::allocator<double>> { 
                double *__value_; 
            } __end_cap_; 
        } rowHeights; 
        struct vector<double, std::allocator<double>> { 
            double *__begin_; 
            double *__end_; 
            struct __compressed_pair<double *, std::allocator<double>> { 
                double *__value_; 
            } __end_cap_; 
        } columnWidths; 
        struct vector<CRTableStructureMerge, std::allocator<CRTableStructureMerge>> { 
            struct CRTableStructureMerge {} *__begin_; 
            struct CRTableStructureMerge {} *__end_; 
            struct __compressed_pair<CRTableStructureMerge *, std::allocator<CRTableStructureMerge>> { 
                struct CRTableStructureMerge {} *__value_; 
            } __end_cap_; 
        } merges; 
    }  _parsedProgram;
    CRTableStructureRecognizerResultProgram * _program;
    struct vector<CGRect, std::allocator<CGRect>> { 
        struct CGRect {} *__begin_; 
        struct CGRect {} *__end_; 
        struct __compressed_pair<CGRect *, std::allocator<CGRect>> { 
            struct CGRect {} *__value_; 
        } __end_cap_; 
    }  _rectForCells;
    struct vector<CRTableStructureRow, std::allocator<CRTableStructureRow>> { 
        struct CRTableStructureRow {} *__begin_; 
        struct CRTableStructureRow {} *__end_; 
        struct __compressed_pair<CRTableStructureRow *, std::allocator<CRTableStructureRow>> { 
            struct CRTableStructureRow {} *__value_; 
        } __end_cap_; 
    }  _rows;
    struct vector<_NSRange, std::allocator<_NSRange>> { 
        struct _NSRange {} *__begin_; 
        struct _NSRange {} *__end_; 
        struct __compressed_pair<_NSRange *, std::allocator<_NSRange>> { 
            struct _NSRange {} *__value_; 
        } __end_cap_; 
    }  _rowsForCells;
    CRNormalizedQuad * _tableQuad;
    struct vector<std::vector<unsigned long>, std::allocator<std::vector<unsigned long>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::vector<unsigned long> *, std::allocator<std::vector<unsigned long>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _textLineIndexesForCells;
}

@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<CRTableStructureColumn' */ struct  columns; /* unknown property attribute:  std::allocator<CRTableStructureColumn>>=^{CRTableStructureColumn}}} */
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<_NSRange' */ struct  columnsForCells; /* unknown property attribute:  std::allocator<_NSRange>>=^{_NSRange}}} */
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<CRTableStructureMerge' */ struct  merges; /* unknown property attribute:  std::allocator<CRTableStructureMerge>>=^{CRTableStructureMerge}}} */
@property (nonatomic) /* Warning: unhandled struct encoding: '{CRTableStructureRecognizerResultParsed=QQB{vector<double' */ struct  parsedProgram; /* unknown property attribute:  std::allocator<CRTableStructureMerge>>=^{CRTableStructureMerge}}}} */
@property (retain) CRTableStructureRecognizerResultProgram *program;
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<CGRect' */ struct  rectForCells; /* unknown property attribute:  std::allocator<CGRect>>=^{CGRect}}} */
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<CRTableStructureRow' */ struct  rows; /* unknown property attribute:  std::allocator<CRTableStructureRow>>=^{CRTableStructureRow}}} */
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<_NSRange' */ struct  rowsForCells; /* unknown property attribute:  std::allocator<_NSRange>>=^{_NSRange}}} */
@property (nonatomic, retain) CRNormalizedQuad *tableQuad;
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<std::vector<unsigned long>' */ struct  textLineIndexesForCells; /* unknown property attribute:  std::allocator<std::vector<unsigned long>>>=^v}} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct vector<CRTableStructureColumn, std::allocator<CRTableStructureColumn>> { struct CRTableStructureColumn {} *x1; struct CRTableStructureColumn {} *x2; struct __compressed_pair<CRTableStructureColumn *, std::allocator<CRTableStructureColumn>> { struct CRTableStructureColumn {} *x_3_1_1; } x3; })columns;
- (struct vector<_NSRange, std::allocator<_NSRange>> { struct _NSRange {} *x1; struct _NSRange {} *x2; struct __compressed_pair<_NSRange *, std::allocator<_NSRange>> { struct _NSRange {} *x_3_1_1; } x3; })columnsForCells;
- (struct vector<CRTableStructureMerge, std::allocator<CRTableStructureMerge>> { struct CRTableStructureMerge {} *x1; struct CRTableStructureMerge {} *x2; struct __compressed_pair<CRTableStructureMerge *, std::allocator<CRTableStructureMerge>> { struct CRTableStructureMerge {} *x_3_1_1; } x3; })merges;
- (struct CRTableStructureRecognizerResultParsed { unsigned long long x1; unsigned long long x2; bool x3; struct vector<double, std::allocator<double>> { double *x_4_1_1; double *x_4_1_2; struct __compressed_pair<double *, std::allocator<double>> { double *x_3_2_1; } x_4_1_3; } x4; struct vector<double, std::allocator<double>> { double *x_5_1_1; double *x_5_1_2; struct __compressed_pair<double *, std::allocator<double>> { double *x_3_2_1; } x_5_1_3; } x5; struct vector<CRTableStructureMerge, std::allocator<CRTableStructureMerge>> { struct CRTableStructureMerge {} *x_6_1_1; struct CRTableStructureMerge {} *x_6_1_2; struct __compressed_pair<CRTableStructureMerge *, std::allocator<CRTableStructureMerge>> { struct CRTableStructureMerge {} *x_3_2_1; } x_6_1_3; } x6; })parsedProgram;
- (id)program;
- (struct vector<CGRect, std::allocator<CGRect>> { struct CGRect {} *x1; struct CGRect {} *x2; struct __compressed_pair<CGRect *, std::allocator<CGRect>> { struct CGRect {} *x_3_1_1; } x3; })rectForCells;
- (struct vector<CRTableStructureRow, std::allocator<CRTableStructureRow>> { struct CRTableStructureRow {} *x1; struct CRTableStructureRow {} *x2; struct __compressed_pair<CRTableStructureRow *, std::allocator<CRTableStructureRow>> { struct CRTableStructureRow {} *x_3_1_1; } x3; })rows;
- (struct vector<_NSRange, std::allocator<_NSRange>> { struct _NSRange {} *x1; struct _NSRange {} *x2; struct __compressed_pair<_NSRange *, std::allocator<_NSRange>> { struct _NSRange {} *x_3_1_1; } x3; })rowsForCells;
- (void)setColumns:(struct vector<CRTableStructureColumn, std::allocator<CRTableStructureColumn>> { struct CRTableStructureColumn {} *x1; struct CRTableStructureColumn {} *x2; struct __compressed_pair<CRTableStructureColumn *, std::allocator<CRTableStructureColumn>> { struct CRTableStructureColumn {} *x_3_1_1; } x3; })arg1;
- (void)setColumnsForCells:(struct vector<_NSRange, std::allocator<_NSRange>> { struct _NSRange {} *x1; struct _NSRange {} *x2; struct __compressed_pair<_NSRange *, std::allocator<_NSRange>> { struct _NSRange {} *x_3_1_1; } x3; })arg1;
- (void)setMerges:(struct vector<CRTableStructureMerge, std::allocator<CRTableStructureMerge>> { struct CRTableStructureMerge {} *x1; struct CRTableStructureMerge {} *x2; struct __compressed_pair<CRTableStructureMerge *, std::allocator<CRTableStructureMerge>> { struct CRTableStructureMerge {} *x_3_1_1; } x3; })arg1;
- (void)setParsedProgram:(struct CRTableStructureRecognizerResultParsed { unsigned long long x1; unsigned long long x2; bool x3; struct vector<double, std::allocator<double>> { double *x_4_1_1; double *x_4_1_2; struct __compressed_pair<double *, std::allocator<double>> { double *x_3_2_1; } x_4_1_3; } x4; struct vector<double, std::allocator<double>> { double *x_5_1_1; double *x_5_1_2; struct __compressed_pair<double *, std::allocator<double>> { double *x_3_2_1; } x_5_1_3; } x5; struct vector<CRTableStructureMerge, std::allocator<CRTableStructureMerge>> { struct CRTableStructureMerge {} *x_6_1_1; struct CRTableStructureMerge {} *x_6_1_2; struct __compressed_pair<CRTableStructureMerge *, std::allocator<CRTableStructureMerge>> { struct CRTableStructureMerge {} *x_3_2_1; } x_6_1_3; } x6; })arg1;
- (void)setProgram:(id)arg1;
- (void)setRectForCells:(struct vector<CGRect, std::allocator<CGRect>> { struct CGRect {} *x1; struct CGRect {} *x2; struct __compressed_pair<CGRect *, std::allocator<CGRect>> { struct CGRect {} *x_3_1_1; } x3; })arg1;
- (void)setRows:(struct vector<CRTableStructureRow, std::allocator<CRTableStructureRow>> { struct CRTableStructureRow {} *x1; struct CRTableStructureRow {} *x2; struct __compressed_pair<CRTableStructureRow *, std::allocator<CRTableStructureRow>> { struct CRTableStructureRow {} *x_3_1_1; } x3; })arg1;
- (void)setRowsForCells:(struct vector<_NSRange, std::allocator<_NSRange>> { struct _NSRange {} *x1; struct _NSRange {} *x2; struct __compressed_pair<_NSRange *, std::allocator<_NSRange>> { struct _NSRange {} *x_3_1_1; } x3; })arg1;
- (void)setTableQuad:(id)arg1;
- (void)setTextLineIndexesForCells:(struct vector<std::vector<unsigned long>, std::allocator<std::vector<unsigned long>>> { void *x1; void *x2; struct __compressed_pair<std::vector<unsigned long> *, std::allocator<std::vector<unsigned long>>> { void *x_3_1_1; } x3; })arg1;
- (id)tableQuad;
- (struct vector<std::vector<unsigned long>, std::allocator<std::vector<unsigned long>>> { void *x1; void *x2; struct __compressed_pair<std::vector<unsigned long> *, std::allocator<std::vector<unsigned long>>> { void *x_3_1_1; } x3; })textLineIndexesForCells;

@end
